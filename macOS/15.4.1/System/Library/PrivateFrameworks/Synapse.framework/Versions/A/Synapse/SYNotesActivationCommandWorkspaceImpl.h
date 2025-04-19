@class NSString;

@interface SYNotesActivationCommandWorkspaceImpl : NSObject <SYNotesActivationCommandImpl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_generateOpenAppEventWithTarget:(id)a0;
+ (id)_generateOpenNoteEventWithTarget:(id)a0 URLString:(id)a1;
+ (void)activateWithDomainIdentifier:(id)a0 noteIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)activateWithMetaActivity:(id)a0 completion:(id /* block */)a1;


@end
