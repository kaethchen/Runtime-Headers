@class NSString;
@protocol _PASSqliteErrorHandlerProtocol, TRIStorageManagementProtocol;

@interface TRISqliteErrorHandler : NSObject <_PASSqliteErrorHandlerProtocol> {
    id<_PASSqliteErrorHandlerProtocol> _defaultErrorHandler;
    id<TRIStorageManagementProtocol> _storageManagement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
