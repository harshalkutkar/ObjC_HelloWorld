//
//  ViewController.h
//  HelloWorld
//
//  Created by SBT on 01/05/2018.
//  Copyright © 2018 SBT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *Label;

@property (assign) NSDictionary *myDictionary;

- (IBAction)HelloButton:(id)sender;

@end

