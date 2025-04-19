@class NSString, NSDictionary, NSData, NSArray;
@protocol UVCDeviceControlDelegate;

@interface UVCDeviceControl : NSObject {
    id<UVCDeviceControlDelegate> _delegate;
    unsigned long long _selector;
    int _type;
    unsigned char _bRequestSupported;
    unsigned char _entityID;
    struct { unsigned char supportGetValue : 1; unsigned char supportSetValue : 1; unsigned char disableDueToAutoMode : 1; unsigned char autoUpdate : 1; unsigned char aynchronous : 1; unsigned char disabledDueToState : 1; unsigned char reserved : 2; } _info;
    NSDictionary *_attributes;
    NSString *_name;
    unsigned long long _currentValueSize;
    NSArray *_autoControls;
    NSData *_cachedValue;
}

@property (readonly) NSData *currentValue;
@property (readonly) unsigned long long currentValueSize;
@property (retain) NSData *info;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *attributes;

- (id)debugDescription;
- (id)description;
- (unsigned long long)selector;
- (void).cxx_destruct;
- (id)delegate;
- (int)type;
- (unsigned long long)entityID;
- (id)initWithAttributes:(struct { unsigned short x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 type:(int)a1 entityID:(unsigned long long)a2 delegate:(id)a3;
- (void)setAutoControls:(id)a0;
- (BOOL)setCurrentValue:(id)a0 error:(id *)a1;
- (void)handleInterruptData:(id)a0 attributes:(unsigned char)a1;
- (id)autoControls;
- (id)parseControl;
- (BOOL)setControlInfo:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 2; })a0 error:(id *)a1;

@end
