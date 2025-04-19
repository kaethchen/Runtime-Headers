@interface DICommonAttach : NSObject

+ (BOOL)diskImageAttach:(id)a0 BSDName:(id *)a1 error:(id *)a2;
+ (BOOL)diskImageAttach:(id)a0 readOnly:(BOOL)a1 autoMount:(BOOL)a2 BSDName:(id *)a3 error:(id *)a4;
+ (BOOL)DI1_attachWithDictionary:(id)a0 BSDName:(id *)a1 error:(id *)a2;
+ (BOOL)DI2_attachWithParams:(id)a0 BSDName:(id *)a1 error:(id *)a2;
+ (BOOL)defaultDiskImageAttach:(id)a0 BSDName:(id *)a1 error:(id *)a2;
+ (BOOL)failWithDI1errorCode:(int)a0 error:(id *)a1;

@end
