@interface BWFormatRequirements : NSObject

@property (readonly) unsigned int mediaType;

- (id)init;
- (BOOL)isEmpty;
- (Class)formatClass;

@end
