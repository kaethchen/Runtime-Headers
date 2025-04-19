@class NSNumber, ITMediaLibrary;

@interface ITMediaEntity : NSObject {
    ITMediaLibrary *_library;
}

@property (readonly, retain, nonatomic) NSNumber *persistentID;
@property (readonly, nonatomic) unsigned long long persistentIDValue;

- (void).cxx_destruct;
- (id)initWithPersistentID:(id)a0 mediaLibrary:(id)a1;
- (id)valueForMPMediaEntityProperty:(id)a0;

@end
