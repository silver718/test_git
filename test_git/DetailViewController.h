//
//  DetailViewController.h
//  test_git
//
//  Created by Pei Qian on 6/9/14.
//  Copyright (c) 2014 Pei Qian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

