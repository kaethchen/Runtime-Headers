@class PHPhotoLibrary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXPhotoLibraryLocalDefaults : PXObservable {
    PHPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_registeredValues;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (id)numberForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setDate:(id)a0 forKey:(id)a1;
- (id)dateForKey:(id)a0;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_appPrivateData;
- (void)_notifyObserversDidChangeValueForKey:(id)a0;
- (void)addIdentifier:(id)a0 forKey:(id)a1;
- (id)identifiersForKey:(id)a0;
- (void)registerBool:(BOOL)a0 forKey:(id)a1;
- (id)registeredNumberForKey:(id)a0;
- (void)removeIdentifier:(id)a0 forKey:(id)a1;
- (void)setIdentifiers:(id)a0 forKey:(id)a1;

@end
