@interface SSScreenDetails : NSObject

@property (readonly, nonatomic) BOOL isScreen;
@property (readonly, nonatomic) long long screenNumber;

- (id)initWithScreenNumber:(long long)a0 isScreen:(BOOL)a1;

@end
