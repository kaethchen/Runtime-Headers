@class NSMutableDictionary, NSDictionary, NSString, NSDate, MLMediaLibrary, MLMediaGroup;

@interface MLMediaSourceImpl : NSObject

@property MLMediaLibrary *mediaLibrary;
@property (copy) NSDictionary *attributes;
@property (retain) MLMediaGroup *rootMediaGroup;
@property (retain) NSMutableDictionary *mediaGroupsByIdentifier;
@property (retain) NSMutableDictionary *mediaObjectsByIdentifier;
@property (copy) NSDate *rootMediaGroupStartTime;
@property (copy) NSString *mediaSourceIdentifier;

- (void)dealloc;
- (id)init;
- (void)nullOutLibraryPointer;

@end
