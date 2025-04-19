@class NSString;

@interface PFResourceAccessAction : PFAction <PFResourceAccessClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)executeRedo;
- (unsigned long long)executeUndo;
- (unsigned long long)executeAction;
- (unsigned long long)executeAction:(id /* block */)a0;
- (BOOL)beginResourceAccess;
- (void)endResourceAccess;
- (unsigned long long)executeRedo:(id /* block */)a0;
- (unsigned long long)executeUndo:(id /* block */)a0;
- (id)resourceObject;
- (void)resourceWillShutdown:(id)a0;

@end
