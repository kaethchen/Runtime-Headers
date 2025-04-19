@class NSString;
@protocol EDRemoteSearchProvider, EDLocalSearchProvider;

@interface EDSearchProvider : NSObject <EDSearchProvider>

@property (readonly) id<EDLocalSearchProvider> localSearchProvider;
@property (readonly) id<EDRemoteSearchProvider> remoteSearchProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLocalSearchProvider:(id)a0 remoteSearchProvider:(id)a1;

@end
