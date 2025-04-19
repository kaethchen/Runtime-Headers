@class NSString;

@interface ICNFIMAPListResponse : ICNFIMAPResponse

@property (nonatomic) unsigned long long mailboxAttributes;
@property (copy, nonatomic) NSString *separator;
@property (copy, nonatomic) NSString *mailboxName;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)_newStringForMailboxAttributes;
- (const char *)_responseName;
- (unsigned long long)mailboxAttributesFromSet:(id)a0;

@end
