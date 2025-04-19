@class NSString, NSData, NSURL, LPVisualMediaProperties;

@interface LPVisualMedia : NSObject <LPCodable, NSSecureCoding> {
    NSData *_data;
    LPVisualMediaProperties *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *_cachedData;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, copy, nonatomic) LPVisualMediaProperties *properties;
@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) BOOL _canEncodeWithoutComputation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)_initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)_initWithData:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)_initWithData:(id)a0 fileURL:(id)a1 MIMEType:(id)a2 properties:(id)a3;
- (id)_initWithLPVisualMedia:(id)a0;
- (BOOL)_isSubstitute;
- (id)initWithCoder:(id)a0 properties:(id)a1;
- (id)initWithCoderInternal:(id)a0;

@end
