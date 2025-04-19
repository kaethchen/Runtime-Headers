@class NSView, NSString;

@interface PXGSingleViewUserData : NSObject <PXGViewUserData>

@property (readonly, nonatomic) NSView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithContentView:(id)a0;

@end
