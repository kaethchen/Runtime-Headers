@class NSString, NSDictionary, NSNumber;

@interface DMFilesystemPrivVars : NSObject {
    NSString *_fsPersonality;
    NSString *_contentMask;
    NSString *_fsType;
    BOOL _serverOnly;
    NSString *_fsUnlocalizedName;
    NSString *_fsLocalizedName;
    NSString *_fsUnlocalizedEncryptionName;
    NSString *_fsLocalizedEncryptionName;
    NSString *_bundlePath;
    NSDictionary *_fsDictionary;
    NSNumber *_minimumSize;
    NSNumber *_maximumSize;
    NSString *_verifyExecutable;
    NSString *_verifyArgs;
    NSString *_liveVerifyArgs;
    NSString *_verifyRepairOutputXMLArgs;
    NSString *_repairExecutable;
    NSString *_repairArgs;
    NSString *_verifyRepairOutputLocale;
    BOOL _shouldBeUserFormattable;
    NSString *_formatExecutable;
    NSString *_formatArgs;
    BOOL _volumeNameIsCasePreserving;
    BOOL _volumeNameIsCaseSensitive;
    BOOL _fileObjectsAreCasePreserving;
    BOOL _fileObjectsAreCaseSensitive;
}

@end
