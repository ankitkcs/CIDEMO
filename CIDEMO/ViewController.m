//
//  ViewController.m
//  CIDEMO
//
//  Created by Vipul Patel on 05/10/16.
//  Copyright © 2016 kcspl. All rights reserved.
//

#import "ViewController.h"
#import "WSClient.h"
#import "WSClient/WSClient+CallAPI.h"
#import "welcomeViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.

}

- (IBAction)btnClick:(id)sender {
    [self.view endEditing:true];
    NSMutableDictionary *parameters = [NSMutableDictionary dictionaryWithDictionary:@{@"strUserName":txtUName.text,@"strPassword":txtPass.text,@"strResolution":@"Theme640x1136"}];
    
    [[WSClient sharedClient] GetRequestWithParameters:parameters API:WSAPILogin complete:^(id responseObject, NSError *error)
     {
         if(error == nil && [responseObject[0] [@"Status"] isEqualToString:@"Success"])
         {
             NSLog(@"%@",responseObject);
             welcomeViewController *actListVC = [self.storyboard instantiateViewControllerWithIdentifier:@"welcomeViewController"];
             [self.navigationController pushViewController:actListVC animated:true];
         }
         else
         {
             if(responseObject){
             }
         }
     }];

    
    
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [textField resignFirstResponder];
    return true;
}

@end
