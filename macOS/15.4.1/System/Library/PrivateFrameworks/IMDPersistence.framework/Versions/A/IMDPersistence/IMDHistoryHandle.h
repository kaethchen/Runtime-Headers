@class NSString;

@interface IMDHistoryHandle : NSObject <NSCoding>

@property (retain) NSString *serviceName;
@property (retain) NSString *ID;
@property (retain) NSString *accountID;
@property (retain) NSString *loginID;
@property BOOL isAnonymous;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
