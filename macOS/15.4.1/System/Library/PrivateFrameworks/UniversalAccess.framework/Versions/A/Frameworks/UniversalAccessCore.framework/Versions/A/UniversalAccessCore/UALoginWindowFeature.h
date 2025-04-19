@class NSString;

@interface UALoginWindowFeature : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *humanReadableName;
@property (nonatomic) BOOL willCopyUsersPreferences;
@property (nonatomic) BOOL enabled;

- (id)description;
- (void).cxx_destruct;

@end
