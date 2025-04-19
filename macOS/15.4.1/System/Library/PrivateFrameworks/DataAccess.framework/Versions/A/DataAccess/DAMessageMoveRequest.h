@class NSString;

@interface DAMessageMoveRequest : NSObject

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *fromFolder;
@property (copy, nonatomic) NSString *toFolder;
@property (retain, nonatomic) id context;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initMoveRequestWithMessage:(id)a0 fromFolder:(id)a1 toFolder:(id)a2;

@end
