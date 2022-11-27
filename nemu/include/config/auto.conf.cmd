deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	/home/guodl/Desktop/ysyx_exam/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
