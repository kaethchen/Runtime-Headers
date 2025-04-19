@class NSArray;

@interface AVAudioHardwareControl : AVAudioHardwareObject

@property (readonly, nonatomic) NSArray *valueKeys;
@property (readonly, nonatomic) unsigned int scope;
@property (readonly, nonatomic) unsigned long long element;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;

- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (unsigned long long)controlID;

@end
