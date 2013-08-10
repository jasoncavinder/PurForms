//
//  PF_DetailViewController.h
//  PurForms Mobile
//
//  Created by Jason Cavinder on 8/9/13.
//  Copyright (c) 2013 Jason Cavinder. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PF_DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
