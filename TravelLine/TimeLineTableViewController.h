//
//  TimeLineTableViewController.h
//  TravelLine
//
//  Created by Leonardo Geus on 21/04/15.
//  Copyright (c) 2015 Leonardo Geus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TimeLineTableViewCell.h"

@interface TimeLineTableViewController : UITableViewController <UITextFieldDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>




@property (weak, nonatomic) IBOutlet UIView *myView2;

@property (weak, nonatomic) IBOutlet UINavigationItem *titleView;


- (IBAction)addText2:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *addImage;

@property (weak, nonatomic) IBOutlet UITextView *myTextField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *botaoCamera;

-(IBAction)AddButtonCancel:(id)sender;

@property NSInteger viagemEscolhida;

@property NSInteger linhaEscolhida;
-(void)mudarTabela;
@end
