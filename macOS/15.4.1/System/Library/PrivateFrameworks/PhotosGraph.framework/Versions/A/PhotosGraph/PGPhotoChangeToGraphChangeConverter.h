@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface PGPhotoChangeToGraphChangeConverter : NSObject {
    NSMutableDictionary *_entityTranslatorByEntityClassName;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)managedEntityNamesToTranslate;

- (void).cxx_destruct;
- (id)graphChangesWithPhotoChange:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (void)_registerTranslatorsWithPhotoLibrary:(id)a0;

@end
