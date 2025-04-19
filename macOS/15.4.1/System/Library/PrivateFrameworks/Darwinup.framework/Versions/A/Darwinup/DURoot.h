@class NSUUID, NSString, NSArray, NSDate, NSURL;

@interface DURoot : NSObject {
    NSURL *_prefixURL;
}

@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *OSBuildVersion;
@property (readonly, copy, nonatomic) NSDate *dateInstalled;
@property (readonly, copy, nonatomic) NSArray *modifications;

+ (id)_rootsWithJSONObject:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithJSONObject:(id)a0 prefixURL:(id)a1;

@end
