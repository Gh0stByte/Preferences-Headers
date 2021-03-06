/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, NSString, PSSpecifier, PSTableCellHighlightContext, UILongPressGestureRecognizer;

@interface PSTableCell : UITableViewCell {

	id _value;
	UIImageView* _checkedImageView;
	BOOL _checked;
	BOOL _shouldHideTitle;
	NSString* _hiddenTitle;
	int _alignment;
	SEL _pAction;
	id _pTarget;
	BOOL _cellEnabled;
	PSSpecifier* _specifier;
	int _type;
	BOOL _lazyIcon;
	BOOL _lazyIconDontUnload;
	BOOL _lazyIconForceSynchronous;
	NSString* _lazyIconAppID;
	BOOL _reusedCell;
	PSTableCellHighlightContext* _customHighlightContext;
	BOOL _forceHideDisclosureIndicator;
	BOOL _isCopyable;
	UILongPressGestureRecognizer* _longTapRecognizer;

}

@property (assign,nonatomic) int type;                                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                       //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic) BOOL reusedCell;                                               //@synthesize reusedCell=_reusedCell - In the implementation block
@property (assign,nonatomic) BOOL forceHideDisclosureIndicator;                             //@synthesize forceHideDisclosureIndicator=_forceHideDisclosureIndicator - In the implementation block
@property (assign,nonatomic) BOOL isCopyable;                                               //@synthesize isCopyable=_isCopyable - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longTapRecognizer;              //@synthesize longTapRecognizer=_longTapRecognizer - In the implementation block
+(float)defaultCellHeight;
+(int)cellStyle;
+(id)reuseIdentifierForSpecifier:(id)arg1 ;
+(Class)cellClassForSpecifier:(id)arg1 ;
+(id)stringFromCellType:(int)arg1 ;
+(id)reuseIdentifierForClassAndType:(int)arg1 ;
+(id)reuseIdentifierForBasicCellTypes:(int)arg1 ;
+(int)cellTypeFromString:(id)arg1 ;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(id)iconImageView;
-(void)setAlignment:(int)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setTarget:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(SEL)action;
-(id)title;
-(void)setValue:(id)arg1 ;
-(id)_automationID;
-(id)target;
-(id)scriptingInfoWithChildren;
-(id)value;
-(BOOL)canBecomeFirstResponder;
-(id)titleLabel;
-(void)setAction:(SEL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(id)_contentString;
-(void)copy:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(float)textFieldOffset;
-(BOOL)isChecked;
-(BOOL)canReload;
-(void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(UITableViewCellStyle)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setReusedCell:(BOOL)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)forceSynchronousIconLoadOnNextIconLoad;
-(void)cellRemovedFromView;
-(BOOL)canBeChecked;
-(void)highlightCellForDuration:(double)arg1 animateUnighlight:(BOOL)arg2 ;
-(void)_invalidateHighlightContext;
-(id)_copyableText;
-(void)_updateAccessoryTypeForSpecifier:(id)arg1 ;
-(void)longPressed:(id)arg1 ;
-(void)setShouldHideTitle:(BOOL)arg1 ;
-(id)blankIcon;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(void)setCellEnabled:(BOOL)arg1 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(void)setCellTarget:(id)arg1 ;
-(void)setCellAction:(SEL)arg1 ;
-(id)cellTarget;
-(SEL)cellAction;
-(void)setForceHideDisclosureIndicator:(BOOL)arg1 ;
-(id)titleTextLabel;
-(id)getIcon;
-(BOOL)cellEnabled;
-(BOOL)reusedCell;
-(BOOL)forceHideDisclosureIndicator;
-(BOOL)isCopyable;
-(void)setIsCopyable:(BOOL)arg1 ;
-(UILongPressGestureRecognizer *)longTapRecognizer;
-(void)setLongTapRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id)valueLabel;
@end

