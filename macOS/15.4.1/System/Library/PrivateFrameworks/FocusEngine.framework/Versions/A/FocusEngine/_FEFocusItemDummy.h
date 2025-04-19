@class NSArray, NSString;
@protocol _FEFocusItemContainer, _FEFocusEnvironment;

@interface _FEFocusItemDummy : NSObject <_FEFocusItem>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _focusFrame;
@property (weak, nonatomic) id<_FEFocusEnvironment> _parentFocusEnvironment;
@property (readonly, nonatomic) BOOL _canBecomeFocused;
@property (readonly, nonatomic) long long _focusGroupPriority;
@property (readonly, nonatomic) BOOL _isTransparentFocusItem;
@property (readonly, nonatomic) id<_FEFocusItemContainer> _focusItemContainer;
@property (readonly, copy, nonatomic) NSArray *_preferredFocusEnvironments;
@property (readonly, copy, nonatomic) NSString *_focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
