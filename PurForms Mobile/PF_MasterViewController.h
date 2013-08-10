//
//  PF_MasterViewController.h
//  PurForms Mobile
//
//  Created by Jason Cavinder on 8/9/13.
//  Copyright (c) 2013 Jason Cavinder. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PF_DetailViewController;

@interface PF_MasterViewController : UITableViewController

@property (strong, nonatomic) PF_DetailViewController *detailViewController;

@end
