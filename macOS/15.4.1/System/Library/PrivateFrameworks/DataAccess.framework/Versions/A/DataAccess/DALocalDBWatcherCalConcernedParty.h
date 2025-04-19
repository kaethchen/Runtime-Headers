@class NSString;

@interface DALocalDBWatcherCalConcernedParty : NSObject <NSCopying>

@property (readonly, weak, nonatomic) id concernedParty;
@property (readonly, nonatomic) NSString *accountID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConcernedParty:(id)a0 accountID:(id)a1;

@end
