@class NSURL, ECLocalMessageActionID, NSString;

@interface ECLocalMessageAction : NSObject <ECLocalMessageActionBuilder>

@property (retain, nonatomic) ECLocalMessageActionID *persistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
