@class NSString;
@protocol STAuthenticationSession;

@interface STCommunicationClientAuthenticationSource : NSObject <STAuthenticationSource>

@property (retain, nonatomic) id<STAuthenticationSession> authenticationSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)authenticateWithIdentifier:(id)a0 forced:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithAuthenticationSession:(id)a0;

@end
