@class NSString, NSError;

@interface IMAPResponse : NSObject

@property (nonatomic) BOOL wasHandled;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isUntagged;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;
+ (id)newIMAPResponseWithConnection:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;

@end
