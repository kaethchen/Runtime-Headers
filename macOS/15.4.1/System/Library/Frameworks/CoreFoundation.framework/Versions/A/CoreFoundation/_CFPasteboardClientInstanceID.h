@class NSObject;
@protocol OS_xpc_object;

@interface _CFPasteboardClientInstanceID : NSObject {
    BOOL _hasCheckedPath;
    BOOL _isCSUIA;
}

@property (readonly) struct __CFUUID { } *uuid;
@property (readonly) NSObject<OS_xpc_object> *connection;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly) BOOL isCSUIA;

- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)a0;

@end
