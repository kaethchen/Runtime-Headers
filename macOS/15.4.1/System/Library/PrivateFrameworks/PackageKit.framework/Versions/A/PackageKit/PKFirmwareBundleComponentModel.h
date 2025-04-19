@class NSString;

@interface PKFirmwareBundleComponentModel : NSObject

@property (retain) NSString *modelID;
@property unsigned int boardID;
@property unsigned int chipID;

+ (id)modelWithBoardID:(unsigned int)a0 chipID:(unsigned int)a1;

- (void)dealloc;

@end
