deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	/home/guodl/ysyx-exam/ysyx_exam/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
