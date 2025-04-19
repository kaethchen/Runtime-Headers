@class NSString, NSData, CSFTensorProperties;

@interface CSFComputeDataBuffer : NSObject

@property (readonly, nonatomic) CSFTensorProperties *tensorProperties;
@property (copy, nonatomic) NSString *tensorName;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long elementSize;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0 name:(id)a1 errOut:(id *)a2;
- (id)_allocateDataWithTensorProperties:(id)a0 error:(id *)a1;
- (unsigned long long)_getTensorSizeWithProperties:(id)a0;
- (id)convertDataToArray;
- (void *)getWritableDataPtr;
- (id)initWithInputArray:(id)a0 name:(id)a1 properties:(id)a2 errOut:(id *)a3;

@end
