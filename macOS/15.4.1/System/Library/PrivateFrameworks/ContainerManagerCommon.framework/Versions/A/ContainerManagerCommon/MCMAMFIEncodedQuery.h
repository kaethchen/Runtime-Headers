@class NSString, NSData;

@interface MCMAMFIEncodedQuery : NSObject

@property (readonly, nonatomic) NSString *loggingName;
@property (readonly, nonatomic) NSData *encodedQuery;

- (void).cxx_destruct;
- (id)initWithLoggingName:(id)a0 encodedQuery:(id)a1;

@end
