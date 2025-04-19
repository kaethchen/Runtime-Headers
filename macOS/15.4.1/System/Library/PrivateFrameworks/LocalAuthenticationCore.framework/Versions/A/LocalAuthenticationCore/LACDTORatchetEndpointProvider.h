@class NSString;
@protocol LACContextProviding;

@interface LACDTORatchetEndpointProvider : NSObject <LACDTOServiceXPCEndpointProvider> {
    id<LACContextProviding> _contextProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContextProvider:(id)a0;
- (id)endpoint:(id *)a0;

@end
