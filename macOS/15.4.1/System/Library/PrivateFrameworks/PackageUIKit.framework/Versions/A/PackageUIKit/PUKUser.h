@class NSString, NSNumber;

@interface PUKUser : NSObject

@property (retain) NSString *accountUserName;
@property unsigned int userIdentifier;
@property (retain) NSNumber *sessionIdentifier;
@property (readonly, getter=isCurrentUser) BOOL currentUser;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 userIdentifier:(unsigned int)a1 name:(id)a2;
- (id)runningProcesses;

@end
