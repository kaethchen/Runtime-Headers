@class NSArray, EQKitBox, NSString;
@protocol EQKitInspectable;

@interface _EQKitInspectableBox : NSObject <EQKitInspectable>

@property (nonatomic) NSArray<EQKitInspectable> *cachedChildren;
@property (readonly, retain, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) NSString *inspectableNameForIcon;
@property (readonly, nonatomic) NSString *inspectableName;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } inspectableNameRange;
@property (readonly, nonatomic) double inspectableWidth;
@property (readonly, nonatomic) double inspectableHeight;
@property (readonly, nonatomic) double inspectableDepth;
@property (readonly, nonatomic) NSArray<EQKitInspectable> *inspectableChildren;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)initWithBox:(id)a0;

@end
