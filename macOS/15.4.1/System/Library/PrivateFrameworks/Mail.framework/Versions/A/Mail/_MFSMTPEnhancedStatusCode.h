@interface _MFSMTPEnhancedStatusCode : NSObject

@property (nonatomic) int classStatus;
@property (nonatomic) int subject;
@property (nonatomic) int detail;
@property (readonly, nonatomic) long long interpretedStatusCode;

- (id)description;

@end
