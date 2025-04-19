@class NSImage, NSString, IAAListPlugin;

@interface IANewAccountTableItem : NSObject

@property (retain) NSImage *image;
@property (retain) NSString *title;
@property (retain) IAAListPlugin *plugin;
@property unsigned long long type;

+ (id)itemWithTitle:(id)a0;
+ (id)otherItem;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
