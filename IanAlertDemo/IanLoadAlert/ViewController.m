//
//  ViewController.m
//  IanLoadAlert
//
//  Created by ian on 14/11/27.
//  Copyright (c) 2014年 ian. All rights reserved.
//

#import "ViewController.h"
#import "IanAlert.h"
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

- (IBAction)pop:(id)sender {
    [IanAlert confirmWithTitle:@"Title" message:@"Message" yes:@"Yes" actionYes:^(){
        NSLog(@"Yes");
    } andno:@"No" actionNo:^(){
        NSLog(@"No");
    }];
}

- (IBAction)success:(id)sender {
    [IanAlert alertSuccess:@"success"];
}

- (IBAction)error:(id)sender {
    [IanAlert alertError:@"error"];
}

- (IBAction)loading:(id)sender {
    [IanAlert showloading];
}

- (IBAction)laodingWord:(id)sender {
    [IanAlert showLoading:@"loading"];
}

- (IBAction)dismiss:(id)sender {
    [IanAlert hideLoading];
}

- (IBAction)dismissComplete:(id)sender {
    [IanAlert hideLoading:^(BOOL Finished){
        NSLog(@"test");
    }];
}
@end
