@protocol TMBackupDeleterProtocol;

@interface TMBackupDeleter : NSObject

@property (class, retain) id<TMBackupDeleterProtocol> defaultDeleter;

@end
