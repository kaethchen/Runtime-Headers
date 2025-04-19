@class NSDictionary;

@interface QCSCN_MaterialAttachment : NSObject

@property unsigned int glID;
@property unsigned int target;
@property void *context;
@property struct CGSize { double width; double height; } size;
@property (copy) NSDictionary *options;

- (void)dealloc;

@end
