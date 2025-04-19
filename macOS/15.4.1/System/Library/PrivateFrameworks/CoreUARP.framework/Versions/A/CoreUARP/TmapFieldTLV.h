@class NSString, NSObject;
@protocol OS_os_log;

@interface TmapFieldTLV : NSObject <NSSecureCoding> {
    NSString *_fieldName;
    unsigned long long _fieldLength;
    int _fieldType;
    int _endian;
    NSObject<OS_os_log> *_log;
    void *_expansionFunction;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bigEndianSwap:(id)a0;
- (BOOL)createFieldType:(id)a0;
- (id)endianSwap:(id)a0;
- (BOOL)expandEncodedString:(id)a0 inCoreAnalytics:(id)a1;
- (BOOL)expandFieldData:(id)a0 inCoreAnalytics:(id)a1;
- (BOOL)expandFieldData:(id)a0 withOffset:(unsigned long long)a1 inCoreAnalytics:(id)a2;
- (BOOL)expandFloat:(id)a0 inCoreAnalytics:(id)a1;
- (BOOL)expandInteger:(id)a0 inCoreAnalytics:(id)a1;
- (BOOL)expandString:(id)a0 inCoreAnalytics:(id)a1;
- (BOOL)expandUnsignedInteger:(id)a0 inCoreAnalytics:(id)a1;
- (BOOL)getNextOffset:(unsigned long long *)a0 fromStart:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0 endian:(id)a1;
- (id)littleEndianSwap:(id)a0;

@end
