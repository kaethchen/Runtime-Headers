@class NSDictionary, NSString;

@interface SKMediaKitFSInfo : NSObject

@property (readonly) NSDictionary *fsInfo;
@property (readonly, nonatomic) NSString *volumeName;
@property (readonly, nonatomic) NSString *fsType;

- (void).cxx_destruct;
- (id)initWithFSInfo:(id)a0;

@end
