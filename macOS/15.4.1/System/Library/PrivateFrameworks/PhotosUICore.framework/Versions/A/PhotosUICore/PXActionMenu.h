@class NSString, NSImage, NSArray;

@interface PXActionMenu : NSObject <PXSubmenu>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) NSArray *childElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)menuWithTitle:(id)a0 childElements:(id)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 systemImageName:(id)a1 childElements:(id)a2;

@end
