@class NSString;

@interface BMIndexField : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *expression;
@property (readonly, nonatomic) long long dataType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 expression:(id)a1 dataType:(long long)a2;

@end
