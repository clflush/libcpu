typedef struct {
	union {
		struct {
			uint64_t r0;
			uint64_t r1;
			uint64_t r2;
			uint64_t r3;
			uint64_t r4;
			uint64_t r5;
			uint64_t r6;
			uint64_t r7;
			uint64_t r8;
			uint64_t r9;
			uint64_t r10;
			uint64_t r11;
			uint64_t r12;
			uint64_t r13;
			uint64_t r14;
			uint64_t r15;
			uint64_t r16;
			uint64_t r17;
			uint64_t r18;
			uint64_t r19;
			uint64_t r20;
			uint64_t r21;
			uint64_t r22;
			uint64_t r23;
			uint64_t r24;
			uint64_t r25;
			uint64_t r26;
			uint64_t r27;
			uint64_t r28;
			uint64_t r29;
			uint64_t r30;
			uint64_t r31;
		};
		uint64_t r[32];
	};
	uint64_t pc;
} reg_fapra64_t;

typedef struct {
	union {
		struct {
			uint32_t r0;
			uint32_t r1;
			uint32_t r2;
			uint32_t r3;
			uint32_t r4;
			uint32_t r5;
			uint32_t r6;
			uint32_t r7;
			uint32_t r8;
			uint32_t r9;
			uint32_t r10;
			uint32_t r11;
			uint32_t r12;
			uint32_t r13;
			uint32_t r14;
			uint32_t r15;
			uint32_t r16;
			uint32_t r17;
			uint32_t r18;
			uint32_t r19;
			uint32_t r20;
			uint32_t r21;
			uint32_t r22;
			uint32_t r23;
			uint32_t r24;
			uint32_t r25;
			uint32_t r26;
			uint32_t r27;
			uint32_t r28;
			uint32_t r29;
			uint32_t r30;
			uint32_t r31;
		};
		uint32_t r[32];
	};
	uint32_t pc;
} reg_fapra32_t;
