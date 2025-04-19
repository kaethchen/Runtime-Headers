@class NSImage, NSString;

@interface AKGridViewItem : NSObject <AKUserInterfaceItem>

@property (nonatomic) BOOL lastItem;
@property long long tag;
@property BOOL enabled;
@property (retain) NSImage *image;
@property (retain) NSString *toolTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
