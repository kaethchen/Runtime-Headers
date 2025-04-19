@class NSString;

@interface MMAlert : NSAlert <NSAlertDelegate> {
    id /* block */ _completionHandler;
    id /* block */ _helpHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)alertShowHelp:(id)a0;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1 helpHandler:(id /* block */)a2;

@end
