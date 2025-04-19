@protocol LACContextProviding;

@interface LACExtractablePasswordPersistenceOptions : NSObject

@property (readonly, nonatomic) id<LACContextProviding> contextProvider;

- (void).cxx_destruct;
- (id)initWithContextProvider:(id)a0;

@end
